Raspberry Pi 2 Model B Nabto Tutorial

Purpose: Remote control (onboard) ACT LED on/off using system commands that manipulate:
/sys/class/leds/led0/brightness

Requirements:
- Raspberry Pi board
- Ethernet cable

How-To:

1. Copy the uNabto SDK to device: #scp -r unabto_sdk pi@ip

2. SSH into the Raspberry Pi: #ssh pi@ip

3. Move into desired folder: #cd unabto/demo/pc_demo/unabto_unix

4. Run the following: #cmake . and #make

5. Run newly made unabto_unix with arguments that match your device id and cryptographic key obtained on https://portal.nabto.com: #./unabto_unix -d [deviceID].demo.nab.to -s -k [Key]

Note! Start the application with: #nohup ./unabto_unix ... &   (will run it in background)

Afterwards you can close the SSH connection and the nabto application will still be running
