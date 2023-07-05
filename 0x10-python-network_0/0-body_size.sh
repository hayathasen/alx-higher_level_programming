#!/bin/bash

url=$1

response=$(curl -s -w "%{size_download}" $url)

echo "The size of the body of the response is $response bytes."

