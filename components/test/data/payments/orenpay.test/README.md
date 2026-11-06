---
type: readme
title: orenpay.test payment handler
summary: Describes a just-in-time installable payment handler that serves its payment method and web app manifests at the payment method identifier URL and always responds to payment requests with success.
---

Just-in-time installable payment handler that serves both the payment method
manifest and the web app manifest directly at the payment method identifier URL
https://a.com:<port>/orenpay.test/pay. This payment handler always can make
payments and responds to a payment request with {"status": "success"}.
