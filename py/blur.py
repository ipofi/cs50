from PIL import Image, ImageFilter

before = Image.open("./pexels-hasan-albari-1424745.jpg")
after = before.filter(ImageFilter.BoxBlur(20))
after.save("./out.jpg")
