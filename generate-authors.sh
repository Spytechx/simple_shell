#!/usr/bin/env bash

set -e

cd "$(dirname "$(readlink -f "$BASH_SOURCE")")/."

{
	cat <<- 'EOH'
#These lists all the contributors of the content of the repository.


	EOH
	echo
	git log --format='%aN <%aE>' | LC_ALL=C.UTF-8 sort -uf
} > AUTHORS
