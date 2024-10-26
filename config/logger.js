const winston = require('winston');
const fs = require('fs');
const path = require('path');

const logDirectory = path.join(__dirname, 'Kirebos_Networks', 'logs');

// Assurer la création du dossier logs s'il n'existe pas
if (!fs.existsSync(logDirectory)) {
    fs.mkdirSync(logDirectory, { recursive: true });
}

const logger = winston.createLogger({
    level: 'info',
    format: winston.format.combine(
        winston.format.timestamp({
            format: 'YYYY-MM-DD HH:mm:ss'
        }),
        winston.format.json()
    ),
    transports: [
        new winston.transports.File({ filename: path.join(logDirectory, 'app.log') })
    ]
});

module.exports = logger;
