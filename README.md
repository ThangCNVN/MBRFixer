<h1 align="center">
  Master Boot Record Recovery
</h1>

<p align="center">Recover the Master Boot Record (MBR) for Windows 10 - because why not! 🚀</p>

## Overview

The Master Boot Record (MBR) is a crucial component of the Windows operating system that stores essential information for booting the system. In certain situations, the MBR can become corrupt or overwritten, leading to booting issues. This project aims to provide a simple solution for recovering the MBR on Windows 10. This project originally is run in .NET C#, But some WinPE can't run .NET so I convert it to C++ and add some improvement.

![](https://raw.githubusercontent.com/ThangCNVN/MBRFixer/main/preview.PNG)

## Changelogs
You can find all version changelogs [here](https://github.com/ThangCNVN/MBRFixer/blob/main/changelogs.md), from unrelease version to pre-release.

## Features

- 🔄 Recover the MBR for Windows 10.
- 🖥️ Support for GUI (Graphical User Interface - [Dear ImGui](https://github.com/ocornut/imgui))

## Risk

- ❌ Only tested on Win10_22H2_x64 so it might not work for all version

## Todo

- 📂 Add support for multiple versions of Windows.
- 💾 Allow writing custom boot records from a .bin file.

## Usage

Follow these steps to recover the Master Boot Record:

1. Download the latest release from the [Releases](https://github.com/ThangCNVN/MBRFixer/releases) page.
2. Run the MBR recovery tool on your Windows 10 machine.
3. Select the appropriate Windows version and then press 'Fix MBR'.
<br>
**4. Optionally, you can write a custom boot record from a .bin file. (not yet)

## Contributing

Contributions are welcome! If you have ideas for improvements or encounter any issues, please open an issue or submit a pull request.

---

