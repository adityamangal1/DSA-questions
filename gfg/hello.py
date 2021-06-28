from gtts import gTTS

text = gTTS(text="loda",lang="en",slow=False)
text.save("hello.mp3")
