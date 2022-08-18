 # 🇩🇴 Bspwm + Arch Linux 🇩🇴


Esta es mi configuración personal de Arch Linux + Bspwm + Polybar 

# Screenshots:

![desktopJC](https://user-images.githubusercontent.com/64985138/184930438-87d16a57-daf7-4535-8b6c-3bbcacb7aee5.png)
![desktop4](https://user-images.githubusercontent.com/64985138/184930463-0ffd2238-3e08-4375-8165-03c81bf4aef7.png)
![Kenshin](https://user-images.githubusercontent.com/64985138/184930482-f28b3473-15cb-4a1e-ba32-98531ab2f9c9.png)
![desktop7](https://user-images.githubusercontent.com/64985138/184930490-49dd6be4-7fea-4d02-9fde-a467b59cf8d1.png)
![captura-pantalla-220818-1253-58](https://user-images.githubusercontent.com/64985138/185451765-5541817a-167d-4cc1-bee3-f8fa9480166e.png)


# Información Importante:

Esta configuración de BSPWM + Polybar, es una creación de los usuarios ( 🥷**Santahgeo** y 🥷**mxhectorvega**) yo solo clone y copie sus configuraciones, las modifique a mi gusto y preferencia. Si quieren ver las configuraciones de los autores originales, aquí les dejo el link de su perfil, para que los visiten y los apoyen con una estrella, gracias a ellos esta configuración existe. 

https://github.com/Santahgeo/dotfiles

https://github.com/mxhectorvega/bspwm-arch

_________________________________________________________________________________________________________________________________________________________


# Instalación:

```
sudo pacman -S polybar bspwm picom sxhkd rofi dunst kitty cava feh ttf-meslo-nerd-font-powerlevel10k nautilus
```
_________________________________________________________________________________________________________________________________________________________


# ***Opcional: Descargar picom-ibhagwan-git para difuminar y BetterlockScreen para una pantalla de bloqueo.***

```
yay -Syu picom-ibhagwan-git betterlockscreen
```
_________________________________________________________________________________________________________________________________________________________

## Asegúrese de instalar Iosveka Nerd Fonts 2.0 para que los íconos funcionen en polybar. Esto se puede encontrar en: https://sourceforge.net/projects/nerd-fonts.mirror/files/v2.0.0/

_________________________________________________________________________________________________________________________________________________________


### También instala Melso-Nerd-Fonts si quieres que las fuentes funcionen correctamente en Kitty

_________________________________________________________________________________________________________________________________________________________


# Crea sus directorios si es necesario:
```

mkdir ~/.config/bspwm

mkdir ~/.config/dunst

mkdir ~/.config/kitty

mkdir ~/.config/cava

mkdir ~/.config/sxhkd

mkdir ~/.fonts

mkdir ~/.config/picom

mkdir ~/Pictures/Wallpapers

mkdir ~/.local/bin
```
_________________________________________________________________________________________________________________________________________________________


### Clonar y copiar el repositorio a través de la terminal.
```
git clone https://github.com/jw2128/bspwm-archlinux-dotfiles.git
```
_________________________________________________________________________________________________________________________________________________________


# Configuración:

### Copiar o mover los archivos de configuración:

```
mv ~/bspwm-archlinux-dotfiles/Wallpapers/ ~/Pictures/Wallpapers

mv ~/bspwm-archlinux-dotfiles/bspwm/bspwmrc ~/.config/bspwm 

mv ~/bspwm-archlinux-dotfiles/sxhkd/sxhkdrc ~/.config/sxhkd

mv ~/bspwm-archlinux-dotfiles/dunst/dunstrc ~/.config/dunst

mv ~/bspwm-archlinux-dotfiles/kitty/kitty.conf ~/.config/kitty

mv ~/bspwm-archlinux-dotfiles/picom/picom.conf ~/.config/picom

mv ~/bspwm-archlinux-dotfiles/polybar ~/.config/

mv ~/bspwm-archlinux-dotfiles/cava/config ~/.config/cava

sudo cp ~/bspwm-archlinux-dotfiles/rofi/config.rasi ~/usr/share/rofi/themes

cp -R ~/bspwm-archlinux-dotfiles/bin/* ~/.local/bin/

chmod +x ~/.config/bspwm/*

chmod +x ~/.local/bin/*
```
_________________________________________________________________________________________________________________________________________________________

## Dependencias: instale las que entienda que necesita.
```
sudo pacman -S bc tmux imagemagick ueberzug ffmpegthumbnailer feh mpd mpc ncmpcpp slock telegram-desktop htop xarchiver neofetch leafpad ranger pcmanfm lxappearance dunst maim xclip sxiv xdotool calcurse zathura zathura-pdf-mupdf neovim mpv screenkey --noconfirm --needed
```
_________________________________________________________________________________________________________________________________________________________


## No copie mi sxhkdrc si no quiere, puede utilizar su propia combinación de tecla

_________________________________________________________________________________________________________________________________________________________


# Lea a continuación si tiene problemas o necesita ayuda.


# Ayuda y guía rápida:

## Abrir aplicaciones

- Kitty: súper + entrar

- Nautilus (Administrador de archivos): super + e

- Pantalla de bloqueo: alt + l

- Rofi: súper + d

- Firefox: súper + w

_________________________________________________________________________________________________________________________________________________________


## Control de ventana y teclas Bspwm:


- Aplicaciones de cierre: super + q

- Reiniciar Bspwm: super + alt + r

- Salir de Bspwm,reiniciar,cerrar sesion: super + backspace

- Ventana flotante: super + f

_________________________________________________________________________________________________________________________________________________________


### Estudie mi configuración de combinaciones de teclas sxhkdrc para que entienda cómo funciona cada cosa y donde llaman los scripts directo para el menú (power, wifi, captura de pantalla) etc. Puede modificar mi archivo sxhkdrc y ponerlo a su gusto y comodidad.

_________________________________________________________________________________________________________________________________________________________


### Cambiar los colores de Polybar:

Vaya a **~/.config/polybar/colors** y edite cada color según sus preferencias. También puede usar Pywal para generar colores (basados ​​en su fondo de pantalla) para su barra y terminal.

### Para que funcione rofi con los temas debe instalar pywal desde pip3
```
pip install pywal
```
_________________________________________________________________________________________________________________________________________________________


### Haz que Kitty inicie automáticamente con Pywal Colors:

Agregue lo que está debajo al final de su .bashrc, .zshrc, (o cualquiera que sea su shell).
```
cat ~/.cache/wal/sequences
```

_________________________________________________________________________________________________________________________________________________________


### Polybar de inicio automático con colores Pywal:
```
touch ~/.Xresources
cp ~/.cache/wal/colors.Xresources ~/.Xresources
```
_________________________________________________________________________________________________________________________________________________________


### Cambiar el fondo de BetterLockScreen

Escriba lo que está abajo en su terminal

```
betterlockscreen -u /path/to/background
```
(También escriba betterlockscreen -h para obtener más ayuda)

_________________________________________________________________________________________________________________________________________________________


### Cambiar el ancho, la altura y la altura flotante de Polybar. (Width, Height, and Floating Height):

Abra ***~/.config/polybar/bars*** en su editor de texto preferido. Cada barra está ordenada correctamente para que sepa qué barra está modificando. (***Main*** es la primera barra de izquierda a derecha, ***ballzz*** la segunda barra (la del centro) y ***LinusTorballzz*** es la última barra hacia la derecha. 

***Widith*** es para cambiar la longitud de la barra (es posible que desee cambiar el ancho de la última barra, ya que no puede mostrar la fecha, el día y la hora)

***Height*** es para cambiar la longitud de la barra de arriba a abajo.

***Offset-x*** es para cambiar qué tan lejos está la barra de la izquierda y la derecha

***Offset-y*** es para cambiar su posición flotante. 

Si desea colocar su barra en la parte inferior de la pantalla, cambie [ bottom = false] a [ bottom = true ].

_________________________________________________________________________________________________________________________________________________________


### Cambia tu tema rofi:

Abra rofi-theme-selector con [super + crtl + e] y elija su tema. Si está intentando descargar un tema personalizado, haga lo siguiente:
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

