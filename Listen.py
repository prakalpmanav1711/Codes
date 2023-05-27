import speech_recognition as sr
from googletrans import Translator

def Listen():
    r = sr.Microphone()

    with sr.Microphone() as source:
        print("Listening...")
        