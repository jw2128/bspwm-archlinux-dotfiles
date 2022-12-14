 # 馃嚛馃嚧 Bspwm + Arch Linux 馃嚛馃嚧


Esta es mi configuraci贸n personal de Arch Linux + Bspwm + Polybar 

# Screenshots:

![desktopJC](https://user-images.githubusercontent.com/64985138/184930438-87d16a57-daf7-4535-8b6c-3bbcacb7aee5.png)
![desktop4](https://user-images.githubusercontent.com/64985138/184930463-0ffd2238-3e08-4375-8165-03c81bf4aef7.png)
![captura-pantalla-220909-1339-49](https://user-images.githubusercontent.com/64985138/189413892-10194952-e3e2-41cf-a8b2-44e6702712cb.png)
![captura-pantalla-220909-1342-52](https://user-images.githubusercontent.com/64985138/189413995-e36b8f00-b476-457f-bf92-51f9ad3de8be.png)
![desktop1](https://user-images.githubusercontent.com/64985138/189413947-4b842405-0e00-410f-853e-42af22098643.png)



# Informaci贸n Importante:

Esta configuraci贸n de BSPWM + Polybar, es una creaci贸n de los usuarios ( 馃シ**Santahgeo** y 馃シ**mxhectorvega**) yo solo clone y copie sus configuraciones, las modifique a mi gusto y preferencia. Si quieren ver las configuraciones de los autores originales, aqu铆 les dejo el link de su perfil, para que los visiten y los apoyen con una estrella, gracias a ellos esta configuraci贸n existe. 

https://github.com/Santahgeo/dotfiles

https://github.com/mxhectorvega/bspwm-arch

_________________________________________________________________________________________________________________________________________________________


# Instalaci贸n:

```
sudo pacman -S polybar bspwm picom sxhkd rofi dunst kitty cava feh ttf-meslo-nerd-font-powerlevel10k nautilus
```
_________________________________________________________________________________________________________________________________________________________


# ***Opcional: Descargar picom-ibhagwan-git para difuminar y BetterlockScreen para una pantalla de bloqueo.***

```
yay -Syu picom-ibhagwan-git betterlockscreen
```
_________________________________________________________________________________________________________________________________________________________

## Aseg煤rese de instalar Iosveka Nerd Fonts 2.0 para que los 铆conos funcionen en polybar. Esto se puede encontrar en: https://sourceforge.net/projects/nerd-fonts.mirror/files/v2.0.0/

_________________________________________________________________________________________________________________________________________________________


### Tambi茅n instala Melso-Nerd-Fonts si quieres que las fuentes funcionen correctamente en Kitty

_________________________________________________________________________________________________________________________________________________________


# Crea sus directorios si es necesario:
```

mkdir ~/Pictures/Wallpapers

mkdir ~/.config/ncmpcpp

mkdir ~/.config/bspwm

mkdir ~/.config/dunst

mkdir ~/.config/kitty

mkdir ~/.config/cava

mkdir ~/.config/sxhkd

mkdir ~/.config/picom

mkdir ~/.config/ranger

mkdir ~/.config/rofi

mkdir ~/.config/mpd

mkdir ~/.local/bin

mkdir ~/.fonts
```
_________________________________________________________________________________________________________________________________________________________


### Clonar y copiar el repositorio a trav茅s de la terminal.
```
git clone https://github.com/jw2128/bspwm-archlinux-dotfiles.git
```
_________________________________________________________________________________________________________________________________________________________


# Configuraci贸n:

### Copiar o mover los archivos de configuraci贸n:

```
cp -R ~/bspwm-archlinux-dotfiles/Wallpapers/* ~/Pictures/Wallpapers

cp -R ~/bspwm-archlinux-dotfiles/bspwm/bspwmrc ~/.config/bspwm 

cp -R ~/bspwm-archlinux-dotfiles/sxhkd/sxhkdrc ~/.config/sxhkd

cp -R ~/bspwm-archlinux-dotfiles/dunst/dunstrc ~/.config/dunst

cp -R ~/bspwm-archlinux-dotfiles/ranger/* ~/.config/ranger

cp -R ~/bspwm-archlinux-dotfiles/mpd/* ~/.config/mpd

cp -R ~/bspwm-archlinux-dotfiles/ncmpcpp/* ~/.config/ncmpcpp

cp -R ~/bspwm-archlinux-dotfiles/kitty/* ~/.config/kitty

cp -R ~/bspwm-archlinux-dotfiles/picom/picom.conf ~/.config/picom

cp -R ~/bspwm-archlinux-dotfiles/polybar ~/.config/

cp -R ~/bspwm-archlinux-dotfiles/cava/config ~/.config/cava

cp -R ~/bspwm-archlinux-dotfiles/rofi/config.rasi ~/.config/rofi

cp -R ~/bspwm-archlinux-dotfiles/bin/* ~/.local/bin/

sudo cp ~/bspwm-archlinux-dotfiles/rofi/config.rasi /usr/share/rofi/themes

chmod +x ~/.config/bspwm/*

chmod +x ~/.config/polybar/launch.sh

chmod +x ~/.config/polybar/script/*

chmod +x ~/.config/ranger/scope.sh

chmod +x ~/.local/bin/*
```
_________________________________________________________________________________________________________________________________________________________

## Dependencias: instale las que entienda que necesita.
```
sudo pacman -S bc tmux imagemagick ueberzug ffmpegthumbnailer feh mpd mpc ncmpcpp slock telegram-desktop htop xarchiver neofetch leafpad ranger pcmanfm lxappearance dunst maim xclip sxiv xdotool calcurse zathura zathura-pdf-mupdf neovim mpv screenkey --noconfirm --needed
```
_________________________________________________________________________________________________________________________________________________________


## No copie mi sxhkdrc si no quiere, puede utilizar su propia combinaci贸n de tecla

_________________________________________________________________________________________________________________________________________________________


# Lea a continuaci贸n si tiene problemas o necesita ayuda.


# Ayuda y gu铆a r谩pida:

## Abrir aplicaciones

- Kitty: s煤per + entrar

- Nautilus (Administrador de archivos): super + e

- Pantalla de bloqueo: alt + l

- Rofi: s煤per + d

- Firefox: s煤per + w

_________________________________________________________________________________________________________________________________________________________


## Control de ventana y teclas Bspwm:


- Aplicaciones de cierre: super + q

- Reiniciar Bspwm: super + alt + r

- Salir de Bspwm,reiniciar,cerrar sesion: super + backspace

- Ventana flotante: super + f

_________________________________________________________________________________________________________________________________________________________


### Estudie mi configuraci贸n de combinaciones de teclas sxhkdrc para que entienda c贸mo funciona cada cosa y donde llaman los scripts directo para el men煤 (power, wifi, captura de pantalla) etc. Puede modificar mi archivo sxhkdrc y ponerlo a su gusto y comodidad.

_________________________________________________________________________________________________________________________________________________________


### Cambiar los colores de Polybar:

Vaya a **~/.config/polybar/colors** y edite cada color seg煤n sus preferencias. Tambi茅n puede usar Pywal para generar colores (basados 鈥嬧?媏n su fondo de pantalla) para su barra y terminal.

### Para que funcione rofi con los temas debe instalar pywal desde pip3
```
pip install pywal
```
_________________________________________________________________________________________________________________________________________________________


### Haz que Kitty inicie autom谩ticamente con Pywal Colors:

Agregue lo que est谩 debajo al final de su .bashrc, .zshrc, (o cualquiera que sea su shell).
```
cat ~/.cache/wal/sequences
```

_________________________________________________________________________________________________________________________________________________________


### Polybar de inicio autom谩tico con colores Pywal:
```
touch ~/.Xresources
cp ~/.cache/wal/colors.Xresources ~/.Xresources
```
_________________________________________________________________________________________________________________________________________________________


### Cambiar el fondo de BetterLockScreen

Escriba lo que est谩 abajo en su terminal

```
betterlockscreen -u /path/to/background
```
(Tambi茅n escriba betterlockscreen -h para obtener m谩s ayuda)

_________________________________________________________________________________________________________________________________________________________

<h2 id="systemd">Systemd-Service: pantalla de bloqueo despu茅s de dormir/suspender</h2>

```sh
# move service file to proper dir (the aur package does this for you)
cp betterlockscreen@.service /usr/lib/systemd/system/

# enable systemd service
systemctl enable betterlockscreen@$USER

# disable systemd service
systemctl disable betterlockscreen@$USER

# Note: Now you can call systemctl suspend to suspend your system
# and betterlockscreen service will be activated
# so when your system wakes your screen will be locked.
```
_________________________________________________________________________________________________________________________________________________________

### Cambiar el ancho, la altura y la altura flotante de Polybar. (Width, Height, and Floating Height):

Abra ***~/.config/polybar/bars*** en su editor de texto preferido. Cada barra est谩 ordenada correctamente para que sepa qu茅 barra est谩 modificando. (***Main*** es la primera barra de izquierda a derecha, ***ballzz*** la segunda barra (la del centro) y ***LinusTorballzz*** es la 煤ltima barra hacia la derecha. 

***Widith*** es para cambiar la longitud de la barra (es posible que desee cambiar el ancho de la 煤ltima barra, ya que no puede mostrar la fecha, el d铆a y la hora)

***Height*** es para cambiar la longitud de la barra de arriba a abajo.

***Offset-x*** es para cambiar qu茅 tan lejos est谩 la barra de la izquierda y la derecha

***Offset-y*** es para cambiar su posici贸n flotante. 

Si desea colocar su barra en la parte inferior de la pantalla, cambie [ bottom = false] a [ bottom = true ].

_________________________________________________________________________________________________________________________________________________________


### Cambia tu tema rofi:

Abra rofi-theme-selector con [super + crtl + e] y elija su tema. Si est谩 intentando descargar un tema personalizado, haga lo siguiente:
```
cp /path/to/theme /usr/share/rofi/themes/
```
Luego abra rofi-theme-selector y cambie a su tema preferido

_________________________________________________________________________________________________________________________________________________________


### Neofetch

Para que los iconos de pacman se visualizen en la terminal con el neofetch, debe instalar la siguiente fuente:
```
yay -S ttf-material-design-icons-extended
```

![terminal](https://user-images.githubusercontent.com/64985138/185453796-9ce42eeb-6977-439b-a6e5-67f7b911f9e0.png)



# FIN

