# My build of dmenu - a dynamic menu for X

This is my custom build of [dmenu](https://tools.suckless.org/dmenu/), a dynamic menu for X originally from the official [suckless](https://suckless.org/) website.
It's customized to suit my personal needs while still keeping it minimal and efficient - a flexible foundation for application launchers, power menus, clipboard pickers and more in my `dwm` Linux system.

## Applied Patches

I have applied the following patches to extend the functionality, visual customization, and usability of **dmenu**:

- [`alpha`](https://tools.suckless.org/dmenu/patches/alpha/)
- [`border`](https://tools.suckless.org/dmenu/patches/border/)
- [`center`](https://tools.suckless.org/dmenu/patches/center/)
- [`mousesupport`](https://tools.suckless.org/dmenu/patches/mouse-support/)
- [`noinputlinesbelowpromptfullwidth`](https://tools.suckless.org/dmenu/patches/no-input/)
- [`xyw`](https://tools.suckless.org/dmenu/patches/xyw/)

## Patch Functionality

These patches allow for visual and interactive improvements: the `alpha` patch adds transparency support, `border` lets me define a border around the menu, and `center` aligns the menu to the center of the screen.

The `mousesupport` makes **dmenu** clickable and more user-friendly.

The `noinputlinesbelowpromptfullwidth` ensures a cleaner look by removing unused space under the prompt, while `xyw` lets me place **dmenu** wherever I want on the screen - top, bottom, or right in the center - perfect for flexible setups.

## Additional Customizations

I use **dmenu** with subtle transparency `alpha = 0xe0` and the [CaskaydiaCove Nerd Font](https://www.nerdfonts.com/font-downloads) at 12px for better readability and icon support.
The colorscheme is based on [Catppuccin Mocha](https://github.com/catppuccin/catppuccin), matching the rest of my setup for a cohesive visual style.

Depending on the script from which **dmenu** is launched, I apply dynamic configurations:

- Menu position (top, bottom, or centered)
- Custom width and height using the `xyw` patch
- Border width via the `border` patch
- Prompt text (or no prompt at all)
- Individual foreground and background colors

All these settings are passed as arguments directly in the script that calls **dmenu**, allowing me to quickly adapt the appearance and behavior to each use case (e.g., power menu, clipboard selector, app launcher).

## Key Bindings

No custom key bindings are defined in **dmenu** itself - all launchers are triggered via keybindings in my **dwm** config.

This keeps **dmenu** clean and modular, allowing each instance to be tailored through scripts and used in different contexts (e.g., `Alt + Space` for app launcher, `Alt + q` for power menu, etc.).

Clipboard-related shortcuts like `Alt + c` and `Alt + v` are also handled via **dmenu** scripts, using [cliphist](https://github.com/sebastianzehner/cliphist) to browse and paste clipboard history.

## Installation

```bash
git clone https://github.com/sebastianzehner/dmenu
cd dmenu
doas make install
```

If you're using `sudo` instead of `doas`, replace the last line accordingly.

## Disclaimer

I'm not a professional developer - just a hobbyist sharing my personal setup.  
This build is provided as-is, with no guarantees that it will work for you.  
If something breaks, you're on your own - but feel free to explore, adapt, and improve!
