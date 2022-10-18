# Heartbleed Bug
## Detect, Exploit & Patching Program

### Cyber Crime & Security Enhanced Programming Unit
### Group Project Oct, 2022

Contributors :
Dimashi Gunasinghe,
Kaveen Suraweera,
Nithula Ratnayake


## Environment setup

- Install docker and run the daemon
- Install the docker container with `docker pull hmlio/vaas-cve-2014-0160`
- Run the container with a port mapping `docker run -d -p 8443:443 hmlio/vaas-cve-2014-0160`
- Open your browser and visit `https://localhost:8443/`


## Sample Data Request

```
cd data_spoof
npm install
node send_data.js
```

## Exploiting command

`python heartbleed.py 127.0.0.1 -p 8443`

## Patching files

### Accessing patching files on Docker

- `docker cp container_name:/var/www/index.html .`
Edit file
- `docker cp index.html container_name:/var/www/index.html`


- `docker cp container_name:/var/www .`
Edit folder
- `docker cp www container_name:/var/`
