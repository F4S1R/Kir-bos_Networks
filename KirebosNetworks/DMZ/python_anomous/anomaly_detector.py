def detect_anomaly(traffic_data):
    threshold = 1000
    if traffic_data > threshold:
        print("Anomaly detected! Traffic exceeds threshold.")
