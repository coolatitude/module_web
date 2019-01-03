# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    launch.py                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pvanderl <pvanderl@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/03 20:53:15 by pvanderl          #+#    #+#              #
#    Updated: 2019/01/03 21:55:12 by pvanderl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

from BaseHTTPServer import BaseHTTPRequestHandler,HTTPServer
from os import curdir, sep

PORT_NUMBER = 8000

#This class will handles any incoming request from
#the browser 
class requestHandler(BaseHTTPRequestHandler):

    def do_GET(self):

        if self.path == "/":
            self.path = "index.html"
        elif self.path.startswith("/editor") and self.path.endswith("1919"):
            self.path = "dev/editor.html"
        try:
            mimetype = ''
            if self.path.endswith(".html"):
                mimetype = 'text/html'
            elif self.path.endswith(".jpg"):
                mimetype = 'image/jpg'
            elif self.path.endswith(".png"):
                mimetype = 'image/png'
            elif self.path.endswith(".css"):
                mimetype = 'text/css'
            elif self.path.endswith(".js"):
                mimetype = 'application/javascript'
            elif self.path.endswith(".gif"):
                mimetype = 'image/gif'
            elif self.path.endswith(".lang"):
                mimetype = 'text/html'
                self.path = self.path[0:-5]

            if mimetype != '':
                f = open(curdir + sep + self.path)
                self.send_response(200)
                self.send_header('Content-type', mimetype)
                self.end_headers()
                self.wfile.write(f.read())
                f.close()
            else:
                self.send_response(301)
                self.send_header('Location', 'localhost:8000')
                self.end_headers()
            return
        except IOError:
            self.send_error(404, 'File Not Found: %s' % self.path)

try:
    server = HTTPServer(('', PORT_NUMBER), requestHandler)
    print 'Started server on port ' , PORT_NUMBER
    server.serve_forever()

except KeyboardInterrupt:
    server.socket.close()
