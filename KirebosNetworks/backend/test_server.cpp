from flask import Flask, request, jsonify

app = Flask(__name__)

@app.route('/notify', methods=['POST'])
def notify():
    data = request.get_json()
    print(f"Notification reçue : {data}")
    return jsonify({"status": "success", "message": "Notification envoyée"}), 200

if __name__ == '__main__':
    app.run(port=5000)
