import socket

ms = socket.socket(socket.AF_INET , socket.SOCK_STREAM)

ms.connect(("IP_" , 32003))
message = input ("-->")
while message.lower().strip() !='bye':