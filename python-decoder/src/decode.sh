##!/bin/bash

echo "begining decoding process"
echo "Reading file output_from_algo.txt"
echo "file with extracted VQ indicies: vq.txt"
echo "file with extracted secret message : secret.txt"

python decoder.py output_from_algo.txt vq.txt secret_message.txt
