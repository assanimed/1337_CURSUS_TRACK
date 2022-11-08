<center><h1> GET_NEXT_LINE </h1> </center>

----


#### you may work with a viriaty of programming, and you can to read the content of a file the must used function is a function that read a line at a time, return that line with '\n' at the end or without it it's the last string, NULL if there's nothing to read or if that file is not valid...



<br />
<br />

`
at 1337 coding school, rebuilding that function with the same behavior was a project to be done.`

<br />
<br />

### in this repo contain the source code -Solution- of that project.
<br />

```c
	char	*get_next_line(int fd);
```

```
	info.txt

name: mohamed elmhassani
skills: JavaScript, react, Redux, php, c...
Location: Tetouan
username: assanimed
```


```c
#include ...
#include <fcntl.h>

int main(void)
{
	...
	int fd = open(".../info.txt", O_RDONLY);
	char *line;
	line = get_next_line(fd); // `name: mohamed elmhassani\n`
	line = get_next_line(fd); // `skills: JavaScript, react, Redux, php, c...\n`
	line = get_next_line(fd); // `Location: Tetouan\n`
	line = get_next_line(fd); // `username: assanimed` (no '\n' was appended)
	line = get_next_line(fd); // `(null)` (EOF Reached)
	...
	return (0);
}


```