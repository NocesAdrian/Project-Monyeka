#!/bin/bash

# configure main cmd
cmd="nyaa"

if [[ -d ~/.config/MonyekaTemplates ]]; then
    echo "~/.config/MonyekaTemplates Exist."
    echo "removing..."
    rm -r ~/.config/MonyekaTemplates
    echo "done."
fi
if [[ -f /usr/local/bin/"$cmd" ]]; then
    echo "/usr/local/bin/$cmd Exist."
    echo "removing..."
    sudo rm /usr/local/bin/"$cmd"
    echo "done."
fi

cp -r src/MonyekaTemplates ~/.config/
echo "template installed."
sudo cp src/"$cmd" /usr/local/bin/
echo "$cmd installed."

