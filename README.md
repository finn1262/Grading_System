# Grading_System (C++)

Grading_System is a simple application for managing student grades, assignments, and courses. It provides tools to input scores, calculate averages, produce reports, and (optionally) export results. This repository contains the source code, tests, and utilities required to run and maintain the system.

## Features

- Manage students, courses, and assignments
- Record and edit grades
- Calculate averages and final grades using configurable weights
- Generate reports per student or per course
- Export reports to CSV

## Technologies

Update this section to match the actual technologies used in the repository. Example:
- Python 3.x
- SQLite
- Flask (for API/UI)

## Getting Started

These instructions will help you get a copy of the project up and running on your local machine.

### Prerequisites

- Git
- The language runtime used by the project (e.g., Python 3.8+)
- Package manager (pip/npm/maven) if applicable

### Installation

1. Clone the repository

```bash
git clone https://github.com/finn1262/Grading_System.git
cd Grading_System
```

2. Install dependencies (example for Python)

```bash
python -m venv venv
source venv/bin/activate  # On Windows use `venv\Scripts\activate`
pip install -r requirements.txt
```

Or for Node.js:

```bash
npm install
```

3. Configure the application

- Copy any example configuration files if present (e.g., `.env.example` to `.env`) and update settings such as database connection, secret keys, etc.

4. Initialize the database (if applicable)

```bash
# Example for a Flask app with Flask-Migrate
flask db upgrade
# Or run any provided setup script
python scripts/init_db.py
```

### Running the app

```bash
# Example for Python
flask run

# Example for Node.js
npm start
```

Open http://localhost:5000 (or the configured port) to access the app.

## Usage

- Add students and courses via the UI or API
- Create assignments and assign weights
- Enter grades and review computed averages
- Export or print reports as needed



