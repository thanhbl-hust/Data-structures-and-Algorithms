import imdb
from imdb import Cinemagoer

ia = Cinemagoer()

#movie = ia.get_movie('0800002')
#for i in movie.infoset2keys['main']:
#    print(i)

max = 0

for i in range(1, 999999):

    s = str(i)
    if len(s) < 7:
        s = '0'*(7 - len(s)) + s

    movie = ia.get_movie(s)
    if 'year' in movie.infoset2keys['main']:
        print(movie['year'])