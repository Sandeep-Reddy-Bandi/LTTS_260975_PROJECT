                                                       Lift Management System: 
# Requirements
 
## Introduction
In this project I am going to Design a program that simulates two lefts. The lifts serves floors from zero (the basement) to the top floor. It is an old lift and it’s not automatic. When people get in the lift, they enter their desired floor number. Several numbers can be requested at a time. After all numbers have been entered, the door is closed by pressing the close door number (the return key). Each time the door closes, the lift checks to see if there are any floors in the current direction (up or down). If there are, then it services these floors first, starting with the closest one to the current floor. If there are no floors requiring stops in the current directions, it checks the opposite direction, again servicing the floor closest to the current floor. If the lift is not moving (direction STOP), then it services up requests before down requests. Each time, the elevator arrives at a floor, new passengers can get on and request a floor. The new requests are added to the ones still pending, and the lifts again evaluates which floor and which lift will be processed first.
Putting all that in mind I have chosen this particular topic in order solve the problem using some innovative methods where it also provides me a coppurtunity to upskill my C programming skills as well as apply SDLC Concepts.

## Objective
 To implement a Lift Management Simulator in oder to how two Lifts are working internally by find shortest path first.




## Defining Our System
A Lift Management system where different features as follows :

1.want to use the lifts

2.Check the status of the lifts

3.Report the lifts

4.exit the program





## Who:

Just to know working of two lifts internally.


# Detail requirements
## High Level Requirements:
|ID | Description | Status (Implemented/Future)|
| - | ----------- | -------------------------- |
|HR01 | User want to use the lifts | Implemented |
|HR02 | User Check the status of the lifts | Implemented|
|HR03 |	If anything wrong Report the lifts | Implemented| 
|HR04 |	Exit the program | Implemented |	


##  Low level Requirements:

|ID | Description | Category| 
| - | ----------- | -------- |
|LR01 |	First page will display options 1,2,3,4 for Use of lifts,status of lifts, Report the lifts and exit the program|Main Menu|
|LR02 |	If user press 1 then system will ask about which floor you are in then the lift will come to that particular floor and asks to get in and press destination floor |	Techincal|
|LR03 |	If user press 2 then the system will display the status of the lifts i.e in which floors the two lifts are in |	Techincal|
|LR04 | If user press 3 they the system will ask to enter the report regardingg the lifts working this message will store in the local file called "reports.txt" |	Techincal|
|LR05 |	If user press 4 means then the system will stop working i.e program exits |	Techincal|
