import matplotlib.pyplot as plt
from reportlab.lib.pagesizes import letter
from reportlab.pdfgen import canvas
import random
print("SIMULATION PROJECT\n")
len=int(input("Enter Arrival time: "))


arv = [random.randint(10,80) for _ in range(len-1)]
serv = [random.randint(10,80) for _ in range(len)]
arrRandom=[0]+arv
arrivalTime =[0]+ [random.randint(1,10) for _ in range(len-1)]
print("Random number of Arrival time")
for i  in range(len):
    print(arrRandom[i],end=",")
print("\n\nRandom number of Service time")
for i  in range(len):
    print(serv[i],end=",")

print("\n\nTime Between Arrival Determination:")     
print("----------------------------------------------------------------------")
print("CustomerNumber |Random Digit | Time Between Arrival")
print("----------------------------------------------------------------------")

for line in range(0,len):
    print("\t|",line+1,"\t\t|",arrRandom[line],"\t\t|",arrivalTime[line])
print("----------------------------------------------------------------------")



print("\n\nService Time Genarated:")     
print("----------------------------------------------------------------------")
print("CustomerNumber |Random Digit | Service Time")
print("----------------------------------------------------------------------")
serviceTime = [random.randint(1,10) for _ in range(len)]
for line in range(0,len):
    print("\t|",line+1,"\t\t|",serv[line],"\t\t|",serviceTime[line])
print("----------------------------------------------------------------------")
print("\n\nSimulation Table:") 
print("----------------------------------------------------------------------")
print(" IAT=Inter Arrival Time\n At=Arrival Time\n ST=Service Time\n STB= Service Time Begin\n WS=Waiting Service\n STE= Service Time End\n TSS=Time Spend in Service\n IT=Idle Time")
print("Customer|IAT\t|AT\t|ST\t|STB\t|WS\t|STE\t|TSS\t|IT")
print("----------------------------------------------------------------------")
L=0
LatArraival=[]
serviceTimeEnd=[]
spendInSystem=[]
customerspend=[]
idleTime=[0]+[]
TimeServiceBegin=[]
waitQueue=[0]+[]

for line in range(0,len):

     L+=arrivalTime[line]
     LatArraival.append(L)
     serviceTimeEnd.append(LatArraival[line]+serviceTime[line])
     spendInSystem.append(serviceTimeEnd[line]-serviceTime[line])
     customerspend.append(serviceTimeEnd[line]-LatArraival[line])
for line in range(0,len):
     for line1 in range(1,len):
         if(serviceTimeEnd[line1-1]>LatArraival[line1]):
             waitQueue.append(serviceTimeEnd[line1-1]-LatArraival[line1])
             serviceTimeEnd.append(waitQueue[line1]+LatArraival[line1])
         else:
             waitQueue.append(0)

     TimeServiceBegin.append(LatArraival[line]+waitQueue[line])
     

for line in range(0,len):
     for line3 in range(1,len):
         idleTime.append(TimeServiceBegin[line3]-serviceTimeEnd[line3-1])
      
     print(line+1,"\t|",arrivalTime[line],"\t|",LatArraival[line],"\t|",serviceTime[line],"\t|",TimeServiceBegin[line],"\t|",waitQueue[line],"\t|",serviceTimeEnd[line],"\t|",customerspend[line],"\t|",idleTime[line])
print("----------------------------------------------------------------------")


sum_wait=0
for i in range(0,len):
    sum_wait+=waitQueue[i];
average_wait= sum_wait/len
print("Average waiting Time:",average_wait)
sum_idle=0
for i in range(0,len):
    sum_idle+=idleTime[i];
pro_idle=sum_idle/serviceTimeEnd[len-1]
print("Probability of Idle time Server:",pro_idle)

sum_service=0
for i in range(0,len):
    sum_service+=serviceTime[i];
average_service= sum_service/len
print("Average Service Time:",average_service)

sum_arrival=0
for i in range(0,len):
    sum_arrival+=arrivalTime[i];
average_arrival= sum_arrival/len
print("Average Inter Arrival Time:",average_arrival)

sum_spend=0
for i in range(0,len):
    sum_spend+=customerspend[i];
average_spend= sum_spend/len
print("Average Customer Spend Time:",average_spend)

canvas = canvas.Canvas("Report.pdf", pagesize=letter)
canvas.setLineWidth(.3)
canvas.setFont('Helvetica', 12)
canvas.drawString(200,750,'Daffodil International University.')
canvas.drawString(215,715,'Simulation and Modeling.')
canvas.drawString(30,650,'Single-Channel Queue')
canvas.drawString(500,650,"31/07/2018")
canvas.drawString(30,625,'Result:')
canvas.drawString(30,605,'Average Service Time:')
canvas.drawString(30,585,str(average_service))
canvas.drawString(30,565,'Average waiting Time:')
canvas.drawString(30,545,str(average_wait))
canvas.drawString(30,525,'Probability of Idle time Server:')
canvas.drawString(30,505,str(pro_idle))
canvas.drawString(30,485,'Simulation Table:')
canvas.drawString(30,465,'Customer')
canvas.drawString(150,465,'Time Spend In System')
canvas.drawString(400,465,'Ideal Time')
for i in range(0,len):
    canvas.drawString(30,445-(i*20),str(i+1))

for i in range(0,len):
    canvas.drawString(150,445-(i*20),str(customerspend[i]))

for i in range(0,len):
    canvas.drawString(400,445-(i*20),str(idleTime[i]))

canvas.save()

new_arrival=[]
customer=[]
for i in range(0,len):
    new_arrival.append(LatArraival[i])
    customer.append(i)
plt.bar(new_arrival,customer)
plt.title("Number of Customers in the System")
plt.xlabel("Arrival Time")
plt.ylabel("customer")
plt.show()    
    
