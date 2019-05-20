#!/bin/bash -eux
/usr/local/bin/go test -timeout 30s -coverprofile=./coverage
