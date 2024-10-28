import logging

logging.basicConfig(filename='../logs/backend.log', level=logging.INFO)

def log_event(event):
    logging.info(event)

def log_error(error):
    logging.error(error)
