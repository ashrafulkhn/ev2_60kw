# ev2_60kw
This is for the GUI development of the project EV Chargers

# How to create AppImage Creation for the project above
<p>
MyApp
AppBin
</p>
<p>
Tools
Appimage
</p>

Build
Empty


LD_LIBRARY_PATH how to add lib dir to path 
To add a directory containing shared libraries to the LD_LIBRARY_PATH environment variable, you can use the following command:
bashCopy code
export LD_LIBRARY_PATH=/path/to/lib/dir:$LD_LIBRARY_PATH
Replace /path/to/lib/dir with the actual path to the directory containing the shared libraries you want to use.
This command prepends the specified directory to the existing value of LD_LIBRARY_PATH, if any. This way, any shared libraries in the directory will be searched for before the default system directories.
Note that this change to LD_LIBRARY_PATH only affects the current shell session. If you want to make the change persistent across reboots, you need to add the above command to your shell startup script, such as ~/.bashrc or ~/.profile.

how to create appimage with the following application. Please note that the so files are mentioned in the comment above
To create an AppImage with the mentioned application and its required shared object (.so) files, you can follow these general steps:
    1. Create a directory to hold the necessary files. For example, you could create a directory called "myapp.AppDir".
arduinoCopy code
mkdir myapp.AppDir
    2. Copy the binary file and its dependencies to the AppDir directory. Make sure to also copy the required .so files mentioned in the comments above. For example:
bashCopy code
cp myapp myapp.desktop myapp.png myapp.AppDir/
cp /path/to/libmyshared.so myapp.AppDir/
cp /path/to/libmyotherlib.so myapp.AppDir/
    3. Create a file called "AppRun" in the AppDir directory, which will be used to run the application. For example:
bashCopy code
#!/bin/sh
export LD_LIBRARY_PATH="$LD_LIBRARY_PATH:$PWD"
exec ./myapp "$@"
    4. Make the "AppRun" file executable:
bashCopy code
chmod +x myapp.AppDir/AppRun
    5. Create a file called "myapp.desktop" in the AppDir directory, which will be used to create the application shortcut. For example:
makefileCopy code
[Desktop Entry]
Name=MyApp
Exec=AppRun
Icon=myapp.png
Type=Application
Categories=Utility;
    6. Make the "myapp.desktop" file executable:
bashCopy code
chmod +x myapp.AppDir/myapp.desktop
    7. Use the linuxdeploy tool to generate the AppImage. This tool will create an AppImage file from the AppDir directory. Make sure to specify the correct arch for the target system.
cssCopy code
linuxdeploy --appdir myapp.AppDir --output appimage --arch x86_64
This should create a single AppImage file that can be distributed and executed on compatible systems without requiring additional installation or configuration.

after this how to use the appimagetool to generate a single file
After building your application as an AppImage, you can use the appimagetool to package it into a single executable file. Here are the steps to do that:
    1. Download the appimagetool from the official GitHub release page: https://github.com/AppImage/AppImageKit/releases
    2. Extract the downloaded file and make the appimagetool executable by running the following command in the terminal:
       bashCopy code
       chmod +x appimagetool-x86_64.AppImage
       Note: Replace appimagetool-x86_64.AppImage with the actual name of the file you downloaded.
    3. Move your built AppImage to the same directory as the appimagetool binary.
    4. In the terminal, run the following command to create the final AppImage:
       bashCopy code
       ./appimagetool-x86_64.AppImage <path-to-your-built-AppImage>
       Note: Replace <path-to-your-built-AppImage> with the actual path to your built AppImage file.
    5. After the command completes, a new AppImage file will be created in the same directory with the name <your-app-name>-x86_64.AppImage.
You can now distribute the generated AppImage file to your users. They can run it by simply double-clicking on the file or running it from the terminal using the command:
phpCopy code
./<your-app-name>-x86_64.AppImage
Note: Replace <your-app-name> with the actual name of your application.

while running the appimage on the other machine it gives me error as xcb plugin was found but not loaded
The error message "xcb plugin was found but not loaded" usually indicates that a library dependency is missing on the target system.
To resolve this error, you can try installing the required libraries on the target system. In this case, it seems that the library "libxcb-xinerama.so.0" might be missing. You can try installing this library on the target system using the package manager.
Alternatively, you can try bundling the required libraries with the AppImage itself. One way to do this is by using the --appimage-extract option to extract the contents of the AppImage, copying the required libraries into the usr/lib directory, and then using the --appimage-desktop and --appimage-sign options to create a new AppImage. Here are the steps:
    1. Extract the contents of the AppImage:
       bashCopy code
       ./myapp.AppImage --appimage-extract
       This will create a new directory called squashfs-root in the same directory as the AppImage.
    2. Copy the required libraries into the usr/lib directory:
       bashCopy code
       cp /path/to/libxcb-xinerama.so.0 squashfs-root/usr/lib/
       Repeat this step for any other missing libraries.
    3. Create a new AppImage:
       cssCopy code
       ./appimagetool-x86_64.AppImage squashfs-root/ --appimage-desktop --appimage-sign
       This will create a new AppImage with the required libraries bundled inside. You can then distribute this new AppImage to users, and it should run without any missing library errors.



# If you face issue with the xcb not load error during deployment
Sudo apt install libxcb-xinerama0
