# OpenCV_C
Exemple d'utilisation d'OpenCV avec C. calculer et afficher le bruit gaussien à une image
### Installation d'openCV:
Pour installer OpenCV sur une distribution Debian/Ubuntu:

```
sudo apt-get install libopencv-dev
```

### Compiler le programme:
Pour compiler OpenCV_C:

```
gcc imageReader.c -o imageReader `pkg-config --libs --cflags opencv` -ldl -lm
```

### Résultat:
Deux fenêtres doivent s'affircher: une avec l'image original et l'autre avec l'image floutée.


