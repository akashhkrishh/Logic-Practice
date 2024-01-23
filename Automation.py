import time
from datetime import datetime
import pyautogui as pyauto
times = ["20:09","20:10","20:11","20:12","20:13","20:30",]
time.sleep(1)
while True: 
    time.sleep(1)
    current_time = datetime.now().strftime("%H:%M")
    if(len(times) == 0): break
    if(times[0]<current_time ):
        times.pop(0)
    if(len(times) != 0 and times[0]==current_time):
        msg = times.pop(0)
        data = msg.split(":")
        convert = lambda x: x - 12 if x > 12 else x
        d = convert(int(data[0]))
        print(msg)
        pyauto.write((str(d))+""+data[1])
        pyauto.press("enter")
    

    

