echo run cmake in container for building
call config.bat
docker start %ContainerName%
docker exec -it %ContainerName% /bin/bash scripts/build
