#! /bin/bash
#! Created by Sumeru Chatterjee

set -u
set -e

# Assume this script was called normally and hasn't been added to the path or symlinked
SCRIPT_DIR=$(dirname "$0")
if [[ $SCRIPT_DIR != /* ]]; then
    if [[ $SCRIPT_DIR == "." ]]; then
        SCRIPT_DIR=$PWD
    else
        SCRIPT_DIR=$PWD/$SCRIPT_DIR
    fi
fi

LOCAL_DEVELOPER_PATH="$HOME/Library/Developer"

TEMPLATES_DIR="Project Templates"
TEMPLATES_SRC_PATH="$SCRIPT_DIR/$TEMPLATES_DIR"
TEMPLATES_DST_PATH="$LOCAL_DEVELOPER_PATH/Xcode/Templates/Application/$TEMPLATES_DIR"

echo "BeachFrontBuilder Template Uninstaller"
echo "==================================="
echo
echo "This will uninstall the iOS BeachFrontBuilder App templates from your computer."
echo
echo

read -p "continue [y/N]: " answer
echo
if [ "$answer" != "Y" ] && [ "$answer" != "y" ]; then
    echo
    echo "[ Cancelled ]"
    echo
    exit 1
fi

# Remove templates
echo
echo "[ Removing templates in $TEMPLATES_DST_PATH ]"
echo
cd "$TEMPLATES_SRC_PATH"
for template in *; do
	installpath="$TEMPLATES_DST_PATH/$template"
    echo rm -rf "$installpath"
    rm -rf "$installpath"
done
echo

echo
echo "[ Uninstall complete. Please restart Xcode. ]"
echo
