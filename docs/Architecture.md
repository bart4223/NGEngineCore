# NGEngineCore — Repository-Analyse

> Generiert am 2026-04-13

---

## 1. Projekttyp

**NGEngineCore** ist eine **C++ Arduino-Bibliothek** und bildet das Fundament des *NGEngine\*-Ökosystems* — einer Sammlung von Arduino-Bibliotheken von Nils Grimmer (GitHub: `bart4223`). Es handelt sich um ein reines Embedded-C++-Projekt. Die vorhandenen `.alpackages`- und `.snapshots`-Ordner sind leere Artefakte der VS Code AL-Extension und haben keine Relevanz.

---

## 2. Verzeichnisstruktur

```text
NGEngineCore/
├── .alpackages/               (leer — VS Code AL-Extension-Artefakt)
├── .snapshots/                (leer)
├── docs/
│   ├── Analysis.md            (diese Datei)
│   └── ToDo.md
├── examples/
│   ├── 8bitshiftregister/     8bitshiftregister.ino
│   ├── dimmablecolor/         dimmablecolor.ino
│   ├── radiobuttons/          radiobuttons.ino
│   └── simplekeypad/          simplekeypad.ino
├── src/
│   ├── Common/                NGStrings
│   ├── Fonts/                 NGCustomFont, NGDefaultFont, NGC64Font, NGZX81Font, NGZXSpectrumFont, NGWingDingsFont
│   ├── Misc/                  NG8BitShiftRegister, NGSimpleKeypad, NGRadioButtons
│   ├── Visuals/               NGIExtendedPaintableComponent
│   └── (root)                 NGEngineCore.h, NGCommon.h, NGCommonGraphics.h,
│                              NGExceptionDefinitions.h, NGIEffect.h, NGINotification.h,
│                              NGIPaintableComponent.h, NGITestableComponent.h,
│                              NGDimmableColor.h/.cpp, NGSplash.h/.cpp,
│                              NGPaintableComponentEffectVoid.h/.cpp
├── .gitignore
├── keywords.txt               (Arduino IDE Syntax-Highlighting)
├── library.properties         (Arduino Library Manager Metadaten)
├── LICENSE
├── NGEngineCore.code-workspace
├── NGEngineCore.xcodeproj/
└── README.md
```

---

## 3. Schlüsseldateien

| Datei | Zweck |
|---|---|
| `library.properties` | Arduino Library Manager: Name, Version (`0.1`), Autor, Kategorie (`Display`), Architecture (`*`) |
| `keywords.txt` | Syntax-Highlighting im Arduino IDE für `NGEngineDatabase` und `initialize` |
| `src/NGEngineCore.h` | Umbrella-Include — bindet alle Teilmodule ein |
| `src/NGExceptionDefinitions.h` | Globale Fehlercode-Konstanten (Ranges 10–9010) |
| `src/NGCommon.h` | Plattformerkennung (AVR/ARM), Serial-Hilfsmakros, Button-Utilities, globaler Font-Pointer |
| `src/NGCommonGraphics.h` | Grafik-Primitive: `coord2D`, `colorRGB`, 20+ benannte Farbkonstanten (inkl. C64-Palette) |

---

## 4. Interfaces

| Interface | Beschreibung |
|---|---|
| `NGIEffect` | Abstrakt: `initialize()` + `processingLoop()` — Basis für alle visuellen Effekte |
| `NGIPaintableComponent` | Abstrakt: vollständige 2D-Zeichen-API (Punkte, Linien, Rechtecke, Kreise, Bilder, Skalierung, Offset) |
| `NGIExtendedPaintableComponent` | Erweitert `NGIPaintableComponent` um gefüllte/segmentierte Kreise und Bogensegmente mit Winkel-Offset |
| `NGINotification` | Abstrakt: Text-Ausgabe (`clear`, `writeInfo` mit Zeile/Spalte) |
| `NGITestableComponent` | Abstrakt: Test-Sequenz-Steuerung (`testSequenceStart` / `testSequenceStop`) |

---

## 5. Klassen

### Root-Level (`src/`)

| Klasse | Beschreibung |
|---|---|
| `NGDimmableColor` | Umhüllt `colorRGB` mit einstellbarem Dämpfungsfaktor; unterstützt `brighter()` / `darker()` mit konfigurierbarem Min/Max-Bereich |
| `NGSplash` | Splash-Screen-Manager: orchestriert bis zu 5 zeitgesteuerte `NGIEffect`-Instanzen auf einem `NGIPaintableComponent`, optional mit `NGINotification`-Ausgabe |
| `NGPaintableComponentEffectVoid` | Implementiert `NGIEffect` als No-Op-Platzhalter |

### Fonts (`src/Fonts/`)

| Klasse | Beschreibung |
|---|---|
| `NGCustomFont` | Abstrakte Basisklasse: `getCharLineValue(char c, byte line)` — Bitmap-Font-Zeilen-Accessor |
| `NGDefaultFont` | Standardstil, Ziffern 0–9 |
| `NGC64Font` | Commodore-64-Stil; Ziffern 0–9 + Buchstaben C, D, E, M, O, R |
| `NGZX81Font` | Sinclair-ZX81-Stil; Ziffern 0–9 + Buchstaben A, B, C, D, E, L, M, N, R, S, X, Z |
| `NGZXSpectrumFont` | ZX-Spectrum-Stil (Implementierung teilweise vorhanden) |
| `NGWingDingsFont` | Symbol-Font: Block, Copyright, Herz, Haus (groß/klein), Smiley, trauriger Smiley, Bäume (dick/dünn), Unbekannt |

### Hardware-Abstraktionen (`src/Misc/`)

| Klasse | Beschreibung |
|---|---|
| `NG8BitShiftRegister` | Treiber für 74HC595-Schieberegister: Latch/Clock/Data-Pins, `setValue`, `shiftValue` (links/rechts), `beginUpdate`/`endUpdate` |
| `NGSimpleKeypad` | Polling-basierte Tastatureingabe mit Callback-Unterstützung; bis zu 5 Tasten; `skmLow`/`skmHigh`-Modus, `skkAlways`/`skkActivation`-Arten; Debounce pro Taste |
| `NGRadioButtons` | Erweitert `NGSimpleKeypad`; steuert LED-Ausgaben über `NG8BitShiftRegister` zur Anzeige der aktiven Schaltfläche |

### Utilities (`src/Common/`)

| Datei | Beschreibung |
|---|---|
| `NGStrings` | Hilfsfunktionen: `FloatToChar`, `LeftPadInteger`, `getSize` |

---

## 6. Abhängigkeiten

| Abhängigkeit | Typ | Anmerkung |
|---|---|---|
| `Arduino.h` | Plattform-SDK | Standard-Arduino-Core |
| `NGMemoryObserver` | Externe NGEngine\*-Bibliothek | Verwendet in allen Beispiel-Sketches (`observeMemory()`); nicht in diesem Repo enthalten |
| `NGColorDotMatrix` | Externe NGEngine\*-Bibliothek | Verwendet im `dimmablecolor`-Beispiel; nicht in diesem Repo enthalten |

---

## 7. Architektur & Design-Philosophie

- **Interface-getrieben**: Kernverhalten wird über rein virtuelle Interfaces definiert, sodass höhere NGEngine\*-Bibliotheken von Abstraktionen abhängen, nicht von konkreten Hardware-Treibern.
- **Pluggbares Font-System**: `NGCustomFont`-Basisklasse mit vier konkreten Retrocomputing-Implementierungen (C64, ZX81, ZX Spectrum, WingDings-Symbole).
- **Splash/Effekt-System**: Das `NGSplash` + `NGIEffect`-Muster ermöglicht zeitgesteuerte Startsequenzen mit mehreren überlagerten Effekten auf einer zeichenbaren Oberfläche.
- **Plattformportabilität**: Bedingte Kompilierungsmakros unterscheiden AVR (Uno, Mega, Nano) von ARM-Arduino-Boards.
- **Kein CI/CD**: Es existiert keine Pipeline-Konfiguration.

---

## 8. Stand & Entwicklungsstatus

- Version: `0.1` (frühe Entwicklungsphase)
- Aktive Entwicklung: Letzte Commits fügen Glyphen zum `NGWingDingsFont` hinzu
- Kein automatisiertes Test- oder Build-System vorhanden
