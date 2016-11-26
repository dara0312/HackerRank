#!/bin/bash
read s
printf %.3f $(echo "$s" | bc -l)
