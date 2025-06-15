Description:
	Guess the number game

Linux:
	run compile.sh to compile it

FreeDOS:
	write guessDOS.img floppy image to a floppy (use linux or FreeDOS)
	copy *.zip file to c:\watcomc\devel
	run c:\devel\watcomc\owsetenv.bat
	mkdir guess100
        move *.zip to guess100
	unzip *.zip file
	gcc -za99 main.c
	gcl -za99 main.obj
	copy main.exe guess.exe 
	del main.exe
	del *.zip files
	del *.obj files
	copy guess.exe C:\freedos\bin

	game is now installed
