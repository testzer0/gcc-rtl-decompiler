import { Component } from '@angular/core';
import { FormControl, FormGroup, Validators } from '@angular/forms';
import { WebInterfaceService } from './web-interface.service';

@Component({
  selector: 'app-root',
  templateUrl: './app.component.html',
  styleUrls: ['./app.component.css']
})
export class AppComponent {
  title = 'rtl';

  data = new FormGroup({
    code: new FormControl('//Put the C code here'),
    rtl: new FormControl(''),
    cpp: new FormControl(''),
  })

  constructor(private webInterfaceService: WebInterfaceService) { }

  onClick(): void {
    console.log(this.data.value);
    this.webInterfaceService.submitData(this.data.value).subscribe(result => this.data.setValue(result));
  }
}
