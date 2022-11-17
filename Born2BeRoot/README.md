# Hey, It's time to go on a different OS
> <center>Surprise, you won't gonna buy a brand new computer.</center>
<br />

# <center> Born2BeRoot (hands on virtualiation) </center>
<br />


> ## table of Content
1. [Up and Running](#Up-And-Running)
2. [My choice](#My-Choice)
3. [Setup sudo](#Setup-SSH)
3. [Setup SSH](#Setup-SSH)
3. [Setup UFW](#Setup-UFW)



<br>
<br>


> ### Up And Running
<br>

you have to install a linux distribution of [your choice](#My-Choice) with a set up for LVM, you can google...([youtube video](https://youtu.be/GEl2S5MI-WU)).
<br>

> ### My Choice
<br>
I choise cause is the subject suggest for those who are new to sysAdmin.
it's one of the oldest linux distribution developed and maintained by linux community, mostly used for personal use. (learning, testing...)



CentOS derived from RedHat, preferred for enterprises. 



### Setup SSH

> installation
```properties
	sudo apt install openssh-server
```

> configuration
```properties
		sshd_config
	....
	port 4242
	PermitRootLogin no #disable ssh root login
	....
```
> login

```properties
	ssh melmhass@10.11.250.166 -p 4242
```


### Setup SSH
<br />

> installation

```
	sudo apt install ufw
```

> Setting Up Default Policies

```properties
sudo ufw default allow incoming
sudo ufw default allow outgoing
```

> Allowing SSH Connections
```properties
sudo ufw allow 4242 #ssh port
```

> Enabling UFW
```properties
sudo ufw enable

sudo ufw status verbose
```

> NEXT SERVICES


HTTP on port 80, which is what unencrypted web servers use, using `sudo ufw allow http` or `sudo ufw allow 80`.

HTTPS on port 443, which is what encrypted web servers use, using `sudo ufw allow https` or `sudo ufw allow 443`






> # GROUPS
`getent group <groupname>`

`id <username>`

`cat /etc/group` | grep <groupname>

 > # Password Quality RULES (Password policy)


# BONUS 

| Title     |Purpose |
|:-------:  |:---------:|
|Born2Fail  | ADD more Security layer to your server|
|FTP	    |Manage Resources Remotely|
|Node.js    | JavaScript Runtime envirenment |
|VNP Server | JavaScript Runtime envirenment |
