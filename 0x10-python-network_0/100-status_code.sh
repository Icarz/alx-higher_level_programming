#!/bin/bash
# This script sends a request to the URL passed as an argument and displays only the status code

curl -o /dev/null -sw "%{http_code}" $1

