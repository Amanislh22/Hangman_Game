#!/bin/bash
definitions=$(curl -s "https://api.datamuse.com/words?ml=maison&v=fr&d=1" | jq -r '.[].defs')

# Check if there are definitions returned
if [ -z "$definitions" ]; then
    echo "No definitions found for the word 'maison'"
else
    # Select a random definition
    selected_definition=$(shuf -n 1 <<< "$definitions")
    echo "Hint: $selected_definition"
fi
