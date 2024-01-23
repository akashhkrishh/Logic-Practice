import time
from datetime import datetime
import pyautogui as pyauto
times = ["09:09","10:01","10:10","11:11","12:12","12:21","12:34","01:01","01:11","01:23","02:02","02:22"]
time.sleep(5)
while True: 
    time.sleep(0.7)
    current_time = datetime.now().time().strftime("%I:%M")
    if(len(times) == 0 ): 
        break
    if(times[0]==current_time):
        msg = times.pop(0)
        data = msg.split(":")
        pyauto.write(str(int(data[0]))+data[1])
        pyauto.press("enter")
    elif(times[0] < current_time):
        times.pop(0)
    else:
        print(times[0])
    

    

