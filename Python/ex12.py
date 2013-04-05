from sys import argv

script, user_name = argv
prompt = '> '

print "Hi %s, I'm the %s script." % (user_name, script)
print "I'd like to ask you a few quesitons."
print "Do you like me %s?" %user_name
likes = raw_input(prompt)

print "WBlah %s"%user_name
lives = raw_input(prompt)

print "What kind fo comp"
computer = raw_input(prompt)

print"""
You said %r. YOu live %r. You have %rcomputer. Nice."""%(likes,lives,computer)