#!/bin/bash

if [[ -e ~/.config/MonyekaTemplates ]]; then
    echo "~/.config/MonyekaTemplates Exist."
    echo "removing..."
    rm -r ~/.config/MonyekaTemplates
    echo "done."
fi
if [[ -e /usr/local/bin/nyaa ]]; then
    echo "/usr/local/bin/nyaa Exist."
    echo "removing..."
    sudo rm /usr/local/bin/nyaa
    echo "done."
fi

cp -r src/MonyekaTemplates ~/.config/
echo "template installed."
sudo cp src/nyaa /usr/local/bin/
echo "nyaa installed."

