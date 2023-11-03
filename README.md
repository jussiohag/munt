# mt32_emu - munt

# INSTALL 

dependencies: 
* cmake 
	apt install cmake
* qt - https://askubuntu.com/questions/1404263/how-do-you-install-qt-on-ubuntu22-04
	sudo apt install -y qt6-base-dev
	# and these? 
	# sudo apt install osspd
	# sudo apt install qtcreator


munt: 
* https://askubuntu.com/questions/1404263/how-do-you-install-qt-on-ubuntu22-04

roland roms (random google link): 
* https://drive.google.com/drive/folders/0B5j-_ZMS8_UoY2MxOWRmMzktZmZhOS00M2EwLWFkZGItODNmODY4ZjU5Y2Vi?resourcekey=0-3GxLn7A7tvyl0sYvceflJA



Main menu
Skip to content

    About

Gjaiop
Open Source And Linux Software Site
RSS
How to install MUNT and Dosbox on Debian 10
Posted by OncNasurfaj on September 10, 2020	

About:

In this tutorial i will show you step by step how to install Dosbox and MUNT on Debian 10 Buster. With this configuration you can make your DOS games have more enjoyable sound while playing. That is, if you don’t like soundblaster sound.

1.Dosbox:

About: Dosbox is a DOS emulator ported on many different platforms such as Windows, Linux, BeOS, Mac OS X and others. It emulates many older system and has good video and audio compatibility with many old DOS Games. You can replay many of the old classic DOS games which do not run on new computer. Dosbox is totally free and open source.

2.MUNT:

About: MUNT is a multi-platform synthesizer emulator that emulates pre-GM MIDI devices such as the Roland MT-32, CM-32L, CM-64 and LAPC-I. It is in no way affiliated with Roland Corp.

Guide:

Requirements: To build and install MUNT on clean Debian 10 build you will need the following packages:

apt-get install build-essential cmake qt4-default qt4-qmake osspd

1.Start Firefox and search for “munt download”.

2. Open the link by sourceforge.net and download MUNT.

3. Open “Files”, go into your Downloads folder, and extract the folder “munt-2.3.0.tar.gz” by right clicking the archive and click “extract here”. You will get new folder with name “munt-2.3.0”.

4. Right click on “munt-2.3.0” folder and then click “Open in terminal” then do the following:

su  // Must be root for installation.
ls  // This will list folders and files for easy copy paste.
cd mt32emu

5.Then when you cd in mt32emu folder write in the following:

cmake -DCMAKE_BUILD_TYPE:STRING=Release
make
make install

Wait for the process to finish, then:

Wait some time, then:

Again wait couple of seconds until installation of files finishes.

6. Now do the following in the same terminal window:

cd ..  //To go back to previous folder.
cd mt32emu_qt
cmake -DCMAKE_BUILD_TYPE:STRING=Release
make
make install
sudo ldconfig  // To recognize newly added libraries

Go to previous folder.

Cd to folder “mt32emu_qt”.

Write or copy paste “cmake -DCMAKE_BUILD_TYPE:STRING=Release”

Wait couple seconds, then “make”.

Wait few seconds, then “make install”

After finishing type in “sudo ldconfig” and press enter to recognize the newly added libraries.

6. Open up new terminal window and type “mt32emu-qt” to start MUNT.

7. That’s it you have built and installed MUNT, but in order to get sound you need appropriate MT32 roms which you can get here:

http://gestyy.com/eekq5R

Notice: URL shortener is used.

Download and save archive.

Extract archive.

Open up MUNT, go into “options”, and click “ROM Configuration”, then pick the directory where the roms are. In my case it was /home/osboxes/Downloads/roms and press OK.

8. Now it is a fully functional MUNT emulator.

You may check if it is working by downloading some midi files and playing.

Notice: some midi files won’t work so try to find a working one.

Check this site for midis:

https://bitmidi.com/

Dosbox MUNT Configuration:

1.Installation:

su
dpkg --add-architecture i386  //Must add, because dosbox is 32bit 
apt-get update
apt-get install dosbox

2.Run Dosbox once so it generates a config file.

3.Open up “Files” and navigate to “Home” folder, press alt-h on your keyboard to display hidden files.

4. Open folder “.dosbox”

5. Open up the config file in text editor, and look for line “midiconfig=” and add “128:0” like this:

Optional: Scroll down where it says “You can put you MOUNT lines here”, and place your mount lines like this:

mount c: /home/osboxes/Downloads/ 
c:

It will be different for your system, this is just an example.

Now when i start Dosbox it will automatically mount to this folder which will be my games folder, from there i will cd to my for example POLICEQUEST2 game folder and start the game.

You may change this and add any folder you like.

For info on how to use dosbox check this guide :

https://gjaiop.wordpress.com/2016/02/10/how-to-use-dosbox-in-debian-8-1/

Closing Words:

To be able to use mt32 emulator and dosbox, first mt32emu should be running and you should have game that supports Roland Audio. You can get big list of Roland supported games on Wikipedia.

You need to configure your game to use Roland sound by running INSTALL.EXE, CONFIG.EXE, SYSTEM.COM, BAT.EXE etc. from your DOS game.

Here is link to a demo that supports Roland sound, just run it in dosbox and try out your MUNT installation.

http://www.pouet.net/prod.php?which=4248

Share this:

    TwitterFacebook

Loading...
This entry was posted in linux and tagged begginer munt tutorial, classic, classic games sound, Debian, debian 10 buster, dos, dos games, dos gaming, dosbox, emulation, emulator, game sound, guide, how do i setup mt-32 emulator on debian, how do i setup mt-32 emulator on linux, how do i setup munt, how to install mt emulator with roms, how to install mund on debian, how to install munt, How to install MUNT and Dosbox on Debian 10, how to install munt emulator with roms, how-to, installing mt-32 emulator, linux, midi, mt-32, mt-32 emulator guide, mt32 emulator roms, mt32emu, munt, MUNT emulator roms, roland, roland mt-32 doom, roland mt-32 emulator, roland mt-32 vs soundblaster, sound of dos, synth, tutorial. Bookmark the permalink.
Post navigation
How to use your computer keyboard as MIDI keyboard in Cakewalk – Windows Only
Leave a Reply
My PC Spec
-Computer- Processor : 4x Intel(R) Core(TM) i3-2120 CPU @ 3.30GHz Memory : 8159MB (5105MB used) Operating System : Debian GNU/Linux 8.1 -Display- Resolution : 1360x768 pixels OpenGL Renderer : GeForce GT 630/PCIe/SSE2 X11 Vendor : The X.Org Foundation -Multimedia- Audio Adapter : HDA-Intel - HDA Intel PCH Audio Adapter : HDA-Intel - HDA NVidia
Recent Posts: Gjaiop
How to install MUNT and Dosbox on Debian 10
How to use your computer keyboard as MIDI keyboard in Cakewalk – Windows Only
Text PDF To Speech on Debian
Virtualbox – How to run OSX on Debian 8.1
SimpleScreenRecorder Debian 8 – How To Install
Stable Balkan Source List Debian Jessie and Wheezy
LMMS – Importing Sound File
Debian 8.1 Antivirus
Integrated Developing Environment IDE for Debian 8.1
How to create simple animated gif from video on Debian
Subscribe to Blog via Email

Enter your email address to subscribe to this blog and receive notifications of new posts by email.

Email Address:

Join 3 other subscribers
Follow Gjaiop on WordPress.com
Earn Online

Donate
If you found something useful and want to buy me a beer.

Payeer No. : P1031931461

Bitcoin Address
1F8HBX5uQ8CMxiGVcThmdCfEV2xJjVWnFH

Thank you.
Archives

    September 2020 (2)
    April 2016 (1)
    March 2016 (4)
    February 2016 (10)

Create a free website or blog at WordPress.com.
