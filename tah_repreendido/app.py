from hyperpython import *
import hyperpython as hh
import flask

app = flask.Flask('tah_repreendido')

@app.route('/')
def index():
    return "Hello World!"


@app.route('/fibo/<int:size>/')
def fibo(size):
    ...
    lista = [1,2,3,4,5,6, size]
    return str(render(lista))


@app.route('/<name>/')
def hello_name(name):
    return str(div([
        h1("Hello " + name),
        p("Seja bem vindxs!"),
        "Saiba mais: ",
        a("Google", href='http://www.google.com'),
    ]))