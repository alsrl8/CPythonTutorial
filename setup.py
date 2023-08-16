from distutils.core import setup, Extension

module = Extension("Example", sources=['./c/main.c'])

setup(name="PackageName",
      version="0.01",
      description="Python에서 C코드를 작성하는 예제",
      ext_modules=[module])
