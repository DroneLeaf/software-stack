#!/bin/bash
set -e

# Write SSH key to file
echo "$SSH_PRIVATE_KEY" | base64 --decode > priv.key
chmod 600 priv.key

# Upload artifact
echo "[ + ] Uploading new artifact $ARTIFACT to server..."
scp -o StrictHostKeyChecking=no -i ./priv.key "$ARTIFACT" ubuntu@"$SERVER":/home/ubuntu/

# Update artifact on server
echo "[ + ] Updating..."
ssh -o StrictHostKeyChecking=no -i ./priv.key -T ubuntu@"$SERVER" bash -s <<EOF
sudo sh -c '
mv /root/leaf_apt_repo/download_center/static/$ARTIFACT_TYPE/* /tmp/ 2>/dev/null || true
mv /home/ubuntu/$ARTIFACT /root/leaf_apt_repo/download_center/static/$ARTIFACT_TYPE/
chown root:root /root/leaf_apt_repo/download_center/static/$ARTIFACT_TYPE/$ARTIFACT
'
EOF

# Cleanup
rm -f priv.key
