<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <link rel="stylesheet" href="https://img-bucket.s3.jp-tok.cloud-object-storage.appdomain.cloud/style.css">
</head>
<body>
    <div class="head">
        <h1>IBM CLOUD OBJECT STORAGE</h1>
    </div>
    <img width="300px" src="https://img-bucket.s3.jp-tok.cloud-object-storage.appdomain.cloud/img1.jpg" />
    <img width="300px" src="https://img-bucket.s3.jp-tok.cloud-object-storage.appdomain.cloud/img2.jpg" />
    <img width="300px" src="https://img-bucket.s3.jp-tok.cloud-object-storage.appdomain.cloud/img3.jpg" />
    <img width="300px" src="https://img-bucket.s3.jp-tok.cloud-object-storage.appdomain.cloud/img4.jpg" />
    <img width="300px" src="https://img-bucket.s3.jp-tok.cloud-object-storage.appdomain.cloud/img5.jpg" />


    <script>
        window.watsonAssistantChatOptions = {
          integrationID: "411fd417-3620-4bab-86b2-18cef1c4f355", // The ID of this integration.
          region: "eu-gb", // The region your integration is hosted in.
          serviceInstanceID: "e060aaaf-9fac-4dc2-b29f-031440db5051", // The ID of your service instance.
          onLoad: function(instance) { instance.render(); }
        };
        setTimeout(function(){
          const t=document.createElement('script');
          t.src="https://web-chat.global.assistant.watson.appdomain.cloud/versions/" + (window.watsonAssistantChatOptions.clientVersion || 'latest') + "/WatsonAssistantChatEntry.js";
          document.head.appendChild(t);
        });
      </script>
</body>
</html>
