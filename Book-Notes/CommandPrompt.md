# Command Prompt

1. ipconfig  ("Internet protocol configuration" display information about network configuration)
2. ipconfig /all (This will show physical address(MAC) and dns address)
3. ipconfig /all | findstr DNS (filters the output and display DNS only)
4. ipconfig /release (it will release old ip address)
5. ipconfig /renew (create new ip address)
6. ipconfig /displaydns (display the content of DNS on your computer)
7. ipconfig /displaydns | clip (it will copy the DNS on clipboard)
8. ipconfig /flushdns (it will flushes old dns cache from your computer)
9. nslookup google.com (it will give you physical address of website)
10. cls (clear the screen)
11. getmac /v (display mac address of your computer)
12. powercfg /energy (display report of energy used in computer)
13. powercfg /batteryreport (display the report battery of computer)
14. chkdsk /f (it will check any error in disk and fix it)
15. chkdsk /r (it will check your physical sector of hardDsik and fix it)
16. sfc /scannow (scan all files and replace the corrupted file)
17. DISM /Online /Cleanup-Image /CheckHealth (determine the image is repairable and check any corruptions detected)
18. DISM /Online /Cleanup-Image /scannow (perform quick scan and determine image is repairable)
19. DISM /Online /Cleanup-Image /RestoreHealth (clean and recover operations on running operating network)
20. tasklist | findstr script (list of processes)
21. netsh wlan show wlanreport (show all wifi events from last three days in html)
22. netsh interface show interface (Admin state State Type Interface Name)
23. netsh interface show interface | findstr "IP Address" (specficaly show interface of IP Address)
24. netsh interface ip show dnsserver
25. netsh advfirewall set allprofiles state off (turning off window firewall but it actually not happen)
26. netsh advfirewall set allprofiles state on (turning on window firewall but it actually not happen)
27. ping google.com (calculate round-trip times and packets loss statistics and display brief summary)
28. ping -t google.com (test the connection b/w two network nodes by sending packets to host then reporting time it take to get response)
29. tracert google.com (Traceroute find exact route taken to reach server and time take by each step)
30. tracet -d google.com
31. netstat (display network status and protocol statistics)
32. netstat -af
33. netsh wlan show profile (It will show networks name which are connected to your computer)
34. netsh wlan show profile "wifi name" key=clear (It will show networks password name which are connected to your computer)
35. systeminfo (quick way to find system properties)
36. explorer . (it will open the file explorer through cmd) REVERSE goto file explorer address bar and enter cmd hit enter boom you enter location of cmd
37. color 1 ,2 ,3 (change the color of background)
38. curl qrenco.de/website name (it will create QR code of website in cmd)
39. start website name (it will start the website)
40. shutdown (system shutdown)
41. F7 (show history of commands used)
42. Shift + right click to "open with terminal"
43. shutdown /r /fw /f /t 0 (restart your computer and directly goes to bios)

## Arch linux & dwm tilling window manager

- archinstall (script to make arch installation easy)



## Window subsystem linux(WSL)

- You can install any distro on window through WSL.
