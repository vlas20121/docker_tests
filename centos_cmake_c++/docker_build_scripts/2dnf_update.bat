echo update container - install all packages used by cmake build 
call config.bat
docker start %ContainerName%
docker exec -it %ContainerName% /bin/bash scripts/dnf_update
