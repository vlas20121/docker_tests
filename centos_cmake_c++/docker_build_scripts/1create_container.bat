echo create container used for project build
call config.bat
docker pull centos
docker run --detach --name %ContainerName% -v %ProjDir%:/src -v %ScriptsDir%:/scripts -i -t centos /usr/bin/top -b
rem docker run --name %ContainerName% -v %ProjDir%:/src -v %ScriptsDir%:/scripts -i -t centos /bin/bash
