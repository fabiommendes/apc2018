from turtle import *
from time import sleep

colors = ['red', 'black', 'yellow', 'green', 
          'blue', 'pink']
turtles = [Turtle() for _ in range(6)]

for i, t in enumerate(turtles):
    t.seth(360 / 6 * i)
    t.color(colors[i])
    t.speed(10)
    t.width(20)

for t in turtles: 
    t.forward(200)
for t in turtles: 
    t.left(120)
    t.forward(200)
for t in turtles: 
    t.left(120)
    t.forward(200)



sleep(5)