#!/bin/bash
#while read line
#do
#	    echo $line
#	done < ../.gitignore
git ls-files -i -X .gitignore
