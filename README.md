<h1 align="center">
  Master Boot Record Recovery
</h1>

<p align="center">Recover the Master Boot Record (MBR) for Windows 10 - because why not! 🚀</p>

## Overview

The Master Boot Record (MBR) is a crucial component of the Windows operating system that stores essential information for booting the system. In certain situations, the MBR can become corrupt or overwritten, leading to booting issues. This project aims to provide a simple solution for recovering the MBR on Windows 10. This project originally is run in .NET C#, But some WinPE can't run .NET so I convert it to C++ and add some improvement. ~~Too lazy to create a MakeFile~~

## Features

- 🔄 Recover the MBR for Windows 10.

## Risk

- ❌ Only tested on Win10_22H2_x64 so it might not work for all version

## Todo

- 📂 Add support for multiple versions of Windows.
- 💾 Allow writing custom boot records from a .bin file.
- 🖥️ Add support for GUI (Graphical User Interface)

## Usage

Follow these steps to recover the Master Boot Record:

1. Download the latest release from the [Releases](https://github.com/ThangCNVN/MBRFixer/releases/tag/pre-release) page.
2. Run the MBR recovery tool on your Windows 10 machine.
<br>
*3. Select the appropriate Windows version and follow the on-screen instructions. (not yet)
<br>
*4. Optionally, you can write a custom boot record from a .bin file. (not yet)

## Contributing

Contributions are welcome! If you have ideas for improvements or encounter any issues, please open an issue or submit a pull request.

---

