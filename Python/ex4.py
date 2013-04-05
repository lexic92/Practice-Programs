#the number of cars
cars = 100

#Each car fits 4 people
space_in_a_car = 4

#a lot of drivers!
drivers = 30

#people coming to the concert
passengers = 90

#one driver per car
cars_not_driven = cars - drivers

cars_driven = drivers

#how many people can come, INCLUDING the drivers
carpool_capacity = cars_driven * space_in_a_car

#passengers INCLUDES the drivers!
average_passengers_per_car = passengers / cars_driven

print "There are" , cars, "cars available."
print "There are only", drivers, "drivers availabe."
print "There will be", cars_not_driven, "empty cars today."
print "We can transport", carpool_capacity, "people today."
print "We have", passengers, "to carpool today."
print "We need to put about", average_passengers_per_car, "in each car."


dollarsPerHour = 8.25
hoursWorkedToday = 6

print "I earned $", dollarsPerHour * hoursWorkedToday, "today."
print "Hey %s there." % "you"